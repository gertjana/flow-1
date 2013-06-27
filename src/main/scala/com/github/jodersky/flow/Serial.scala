package com.github.jodersky.flow

import akka.io._
import akka.actor.ExtensionKey
import akka.actor.Props
import akka.actor.ActorRef
import akka.util.ByteString

/** Defines messages used by serial IO layer. */
object Serial extends ExtensionKey[SerialExt] {

  trait Command
  trait Event
  
  case class Open(handler: ActorRef, port: String, baud: Int) extends Command
  case class Opened(port: String) extends Event
  case class OpenFailed(port: String, reason: Throwable) extends Event
  
  case class Received(data: ByteString) extends Event
  
  case class Write(data: ByteString, ack: Boolean = false) extends Command
  case class Wrote(data: ByteString) extends Event
  
  case object Close extends Command
  case object Closed extends Event
  
}
