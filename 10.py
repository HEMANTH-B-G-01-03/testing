from selenium import webdriver
import time

class WebPageFetcher:
    def setUp(self):
        # Initialize the Chrome browser
        self.driver = webdriver.Chrome()  # Ensure ChromeDriver is in your PATH

    def fetch_page(self):
        try:
            # Navigate to the URL
            self.driver.get("https://www.btreesystems.com/selenium-with-python-trainingin-chennai/")
            # Wait for the page to load (you can use WebDriverWait for more robust waiting)
            time.sleep(2)
            # Get the page source and encode it as UTF-8
            page_source = self.driver.page_source.encode('utf-8')
            # Use a with statement to handle file operations
            with open('result.html', 'wb') as f:
                f.write(page_source)
        except Exception as e:
            print(f"An error occurred: {str(e)}")

    def tearDown(self):
        # Make sure to close the browser, even if an exception occurs
        self.driver.quit()


# Objective
# Program Code
# Snapshots

if __name__ == "__main__":
    fetcher = WebPageFetcher()
    fetcher.setUp()
    fetcher.fetch_page()
    fetcher.tearDown()
