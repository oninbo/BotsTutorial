# BotsTutorial

This tutorial aims to demonstrate the basics of Unreal Engine 4 AI tools.

### What is done
By now the **patrolling bot** is implemented.
It can patrol assigned points sequentially.
Each Bot has a field that represents an array of Target Points and can be edited from UE4 Editor. If the array is not empty Bot will visit the location of each Target Point sequentially and stand there for the time period stated in Behavior Tree.
Bot commits infinite number of visits.
