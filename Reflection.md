## Reflection

### Describe the effect each of the P, I, D components had in your implementation.

#### P Controller
I first implemented a P controller with a very small number (0.1) since I didn't want my car to be to agressive when recoverinthis was enough to drive straigth in a very smooth way but as soon as the turns started, the car was not able to recover. Increasing this value would only make it worse even in the straight part, and too small the car wouldn't turn enough to stay in the center. After doing some testing I chose **Kp = 0.05**

#### D Controller
Then for the D controller I started with the same small value as in P (0.1) and I saw the car started to turn but no fast enough to not touch the yellow or red lines, so I increase it after passing 10 I noticed that the car started to be very sensitive and also almost at the end of the bridge the seems to be a disturbance on the road, when increasing `Kd` will make to be more inestable at that particular spot, so I decided to use a not too high value, I chose **Kd=5**.
#### I Controller
Even though a PD controller was enough to drive the car around the track, when adding the `I` controller, the car drove smoother even at the end of the bridge (at the disturbance) the car recovered much faster than with a PD controller I decided to use **Ki = 0.006**



### Describe how the final hyperparameters w ere chosen.
I choose the hyperparameters manually, trial and error to see the effect of each one. 
