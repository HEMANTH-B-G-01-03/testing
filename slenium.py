from selenium import webdriver
from selenium.webdriver.common.by import By
import time

class Login:
    def setUp(self):
        # Initialize the WebDriver
        self.driver = webdriver.Chrome()
        self.driver.get("https://sahyadri.digital/")

    def test_login(self):
        driver = self.driver
        # Click on the student tab
        driver.find_element(By.ID, "student-tab").click()
        time.sleep(4)  # Wait for the elements to load

        # Enter admission number
        driver.find_element(By.NAME, "admission_no").send_keys("0616/IS/2021")
        time.sleep(2)

        # Enter password
        driver.find_element(By.CLASS_NAME, "student_pass").send_keys("vikas123")
        time.sleep(2)

        # Click the login button
        driver.find_element(By.ID, "login-student").click()
        time.sleep(10)  # Adjust sleep time as needed

    def tearDown(self):
        # Quit the WebDriver
        self.driver.quit()


if __name__ == "__main__":
    test = Login()
    test.setUp()
    try:
        test.test_login()
    finally:
        test.tearDown()
