// File: Device.java
package CS2;

import java.time.Duration;

public interface Device {
    String getDeviceName();
    void turnOn();
    void turnOff();
    boolean isOn();
    Duration getTimeInCurrentState();
}
