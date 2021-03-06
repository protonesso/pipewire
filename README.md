# PipeWire

PipeWire is a server and user space API to deal with multimedia
pipelines. This includes:

  - Making available sources of video (such as from a capture devices or
    application provided streams) and multiplexing this with
    clients.
  - Accessing sources of video for consumption.
  - Generating graphs for audio and video processing.

Nodes in the graph can be implemented as separate processes,
communicating with sockets and exchanging multimedia content using fd
passing.

## Building and installation

The prefered way to install PipeWire is to install it with your
distribution package system. This ensures PipeWire is integrated
into the rest of your system for the best experience.

If you want to build and install PipeWire yourself, refer to
INSTALL.md for instructions.

## Usage

The most important purpose of PipeWire is to run your favorite apps.

Some application use the native PipeWire API, such as most compositors
(gnome-shell, wayland, ..) to implement screen sharing. These apps will
just work automatically. 

Most audio applications can use either ALSA, JACK or PulseAudio as a
backend. PipeWire provides support for all 3 backends. Depending on how
your distríbution has configured things this should just work automatically
or with the provided scripts shown below.

PipeWire can use environment variables to control the behaviour of
applications:

* PIPEWIRE_DEBUG=<level>         to increase the debug level
* PIPEWIRE_LOG=<filename>        to redirect log to filename
* PIPEWIRE_LATENCY=<num/denom>   to configure latency
* PIPEWIRE_NODE=<id>             to request link to specified node

### Using tools

pw-cat can be used to play and record audio and midi. Use pw-cat -h to get
some more help. There are some aliases like pw-play and pw-record to make
things easier:

```
$ pw-play /home/wim/data/01.\ Firepower.wav
```

### Running JACK applications

Depending on how the system was configured, your can either run PipeWire and
JACK side-by-side or have PipeWire take over the functionality of JACK
completely.

In dual mode, JACK apps will by default use the JACK server. To direct a JACK
app to PipeWire, you can use the pw-jack script like this:

```
$ pw-jack <appname>
```

If you replaced JACK with PipeWire completely, pw-jack does not have any
effect and can be ommited.

### Running PulseAudio applications

Depending on how the system was configured, your can either run PipeWire and
PulseAudio side-by-side or have PipeWire take over the functionality of
PulseAudio completely. We don't recommend to completely replace PulseAudio
at this point.

Use the pw-pulse script to launch a PulseAudio application on PipeWire, like:

```
$ pw-pulse <appname>
```

### Running ALSA applications

If the PipeWire alsa module is installed, it can be seen with

```
$ aplay -L
```

Alsa application can then use the pipewire: device to use PipeWire
as the audio system.

### Running GStreamer applications

PipeWire includes 2 GStreamer elements called pipewiresrc and
pipewiresink. They can be used in pipelines like this:

```
$ gst-launch-1.0 pipewiresrc ! videoconvert ! autovideosink
```

Or to play a beeping sound:

```
$ gst-launch-1.0 audiotestsrc ! pipewiresink
```

PipeWire provides a device monitor as well so that:

```
$ gst-device-monitor-1.0
```

Shows the PipeWire devices and applications like cheese will
automatically use the PipeWire video source when possible.

### Inspecting the PipeWire state

There is currently no native graphical tool to inspect the PipeWire graph
but we recommend to use one of the excellent JACK tools, such as Carla,
catia, qjackctl,... You will not be able to see all features like the video
ports but it is a good start.

pw-mon dumps and monitors the state of the PipeWire daemon.

pw-dot can dump a graph of the pipeline, checkout out the help for
how to do this.

There is a more complicated tools to inspect the state of the server
with pw-cli. This tools can be used interactively or it can execute
single commands like this to get the server information:

```
$ pw-cli info 0
```

