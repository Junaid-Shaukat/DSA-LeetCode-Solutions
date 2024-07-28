class Solution {
public:
    double angleClock(int hour, int minutes) {

        if (hour == 12) {
            hour = 0;
        }

        double minute_angle = 6.0 * minutes;

        double hour_angle = 30.0 * hour + 0.5 * minutes;

        double angle_difference = fabs(hour_angle - minute_angle);

        double smaller_angle = fmin(angle_difference, 360.0 - angle_difference);

        return smaller_angle;
    }
};
