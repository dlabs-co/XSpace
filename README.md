# XSpace
XSpace is a project developed in NASA´s SpaceApps Challenge. This project is a VR motion chair with Unity, Oculus, LeapMotion and Arduino

Xspace is an open source platform that permits to any one to become an astronaut, the project is made from scratch during the space apps. It has an interface human-machine, that permits to the user get into a virtual reality and interacts in the virtual world and have a response in the real world..

![alt tag](https://github.com/dlabs-co/XSpace/tree/master/Documentation/media/LeapMotionPack.jpg)

The virtual reality is a new emerging technology that allows the integration of the human into the new world, with out any limitations.

The system is a combination of software to build the virtual world, and simulating the live off earth and hardware to give to the user more realistic feelings.
To get into the virtual world we use a special goggles used in combination with a system controller that senses your hands moving naturally in 3d virtual world, all this information is registered by our solution and give the orders to the pilot chair to make the movements simulating any phase of trip of a spaceship.

This project is solving the Launch: A global experience:

https://2016.spaceappschallenge.org/challenges/space-station/launch- a-global-experience

<b>Project</b>

The multimedia resources and the virtual world will give the opportunity to become an astronaut, making the experience of launch, landing, or the life off earth, affordable to every one.

The use of virtual reality will give an absorptive and interactive sensation. The project would like to commemorate one of the most important moments of the space race, the landing on the Moon the 20 of July in 1969.

We decided to create a scenario with the Apollo 11 at the right moment of moon landing. So finally all can feel the same as Neil Armstrong , Michael Collins, and Edwin Aldrin

<b>Challenge:</b> Our solution is a platform that permits any one become in astronaut, and feel the same as a real astronaut, giving the possibility live any phase at the spaceship, launch, travel , landing, or any problem that could occur on the off earth trip.

<b>Virtual reality:</b> This system Is an immersive multimedia, using computer technology that could replicate an environment, real or imagined. Virtual reality can create a sensory experience which can include sight, touch, hearing etc.

<b>Virtual reality headset:</b> A head-mounted device aim to provide an immersive virtual reality experience, it consist in a stereoscopic head-mounted display, providing separate images for each eye, and head motion tracking , which include gyroscopes, accelerometers, etc...

<b>Virtual Hands:</b> To interact in the virtual world we need our hands get into the virtual world , this is possible with a system which that detect your hands and send the information to our platform.

<b>Real response:</b> The virtual reality it is not enough to give a realistic feelings. One more step is to interact with the virtual world and feel the response over our “pilot chair” in the real world, this is possible thanks to a micro controller that connects your software to the hardware using a change the signals produced by the software into movements over the “pilot chair”

<b>Applicatons</b>

The Xspace platform allow to interact in the virtual world of the trip off earth . The main application in the current challenge is to give a first person experience to every one at the differents phases of a space trip

Also this platform could be used in different ways:
<lu>
  <li>To train astronauts, that can feel the same things as on the trip off earth. The scenarios can be changed to put the astronauts in many different situations, with out any real risk, but could give the skill needed in a real trip off earth</li>
  <li>Could be used to bring the space trips to the most of people that normally can not do it, is easily adaptable to be converted in a very realistic game, and is a good way to teach the space, and spaceships</li>
  <li>Entertainment, could be easily transformed in a video game, to put any one to off earth, and fantastics places, or any invented world</li>
</lu>

<b>Software:</b>

The software used is Unity, that is a cross-platform game engine, which is used to develop video games. The core functionality include rendering for 2d and 3D, physics engines, collision detection, sound, animation, networking,etc. But one of the most important part is the scripting, this permits to the developers create a “game” and interact with it.

<b>Firmware:</b> The firmware at the side of the micro controller is the bridge between the main software made with Unity and the actuators. This firmware reside in one arduino board, which receive the orders and will move the right actuators like, motors, servos, signals, etc...

<b>Hardware:</b>

A different kind of hardware were used in this project.

<b>Commercial hardware:</b>

Leap Motion: This device is a computer hardware that supports hand and fingers motions as inputs, requires no hand contact or touch. Composed by two monochromatic infrared cameras, and three infrared leds.

<p align="center">
  <img  src="Documentation/media/LeapMotionPack.jpg" width="200"/>
</p>

Oculus: This device is the virtual reality headset that permit sight into the virtual world.

The Oculus hardware have a stereoscopic vision, gyroscopes, accelerometers, etc.

<p align="center">
  <img  src="Documentation/media/OculusPack.jpg" width="200"/>
</p>

Pilot chair: This is our hardware, hand made, we have recycling material like electric motors, batteries, office chair. The micro controller is an arduino, with motor drivers, sensors, security stop, etc.

<p align="center">
  <img  src="Documentation/media/silla1.jpg" width="200"/>
  <img  src="Documentation/media/silla2.jpg" width="200"/>
  <img  src="Documentation/media/silla3.jpg" width="200"/>
  
</p>

<b>How the project was made</b>

The project is really a bit complicated, cause include software and hardware, with a very high level of knowledge in video game develop and also a high level of knowledge in electronics to control the actuators with the micro controller

So the project has to branch two different ways. The software and hardware

The software.

Even the software was necessary to make some small steps, before to attack the final solution.

The first approach was to be in the virtual world with a desk and a light and switch the light in the virtual world, and a light in a real world was switched too, with this approach were trying to connect the real world and the virtual. This step was a problem bit complicated to solve, cause appears a lot of problems with communications between the video game engine and the micro controller.

Finally overcome this difficulty, and with the right way to connect the video game engine and micro controller, we start to the design the scenario.

The final scenario were selected as the one of the most important moments in the history of the space race, 20 of july of 1969 with the first moon landing.

<p align="center">
  <img  src="Documentation/media/friendspace.jpg" width="200"/>
  <img  src="Documentation/media/oculuspair.jpg" width="200"/>
  <img  src="Documentation/media/softdeveloper.jpg" width="200"/>
  
</p>

<b>The hardware</b>

The hardware was quite difficult to make, cause it was a special holiday 23 of April is our patron Saint and is not possible buy nothing to build a better solution, by the way, we use a lot of recycling materials, like electric motors, office chair.

One of the most common micro controller is the arduino and we use the Nano

Version. And we can control till 7 motors, one servo, and stapler machine, to actuate over the “pilot chair”

<p align="center">
  <img  src="Documentation/media/hardwarejob.jpg" width="200"/>
  <img  src="Documentation/media/silla6.jpg" width="200"/>
  <img  src="Documentation/media/silla7.jpg" width="200"/>
  
</p>


The worse problem was the time to build a “pilot chair” with not to much material, but we find a group of motors recycled from old photocopiers, a batteries , an office chair.

To convert the motor in vibrators we add a clamp to each shaft, making the center of masses is different to the center of movement.
Almost the movements were produced by seven motors with clamps which produce a chair with a lot of vibrations, controlled in intensity by the firmware.

But the chair have two more actuators, one to lean back the chair triggered by a servo. The servo is coupling to the chair using a 3d piece which trigger a lever and the chair lean back.

The last movement is the chair moving down. The chair has a pseudo pneumatic system when it is triggered the chair goes down simulating the landing moment

This system is controlled by one stapler machine converted in a machine that pull from the lever and release the air making the chair begin to descend.
