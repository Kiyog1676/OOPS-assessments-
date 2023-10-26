class lecturedetales:
	
//	initialize data member

def__init__(self):
	self.name=""
	self.subject=""
	self.couse=""
	self.lecturer_count=0
	self.lacturer=[]
	
	def add_lecture_details(self):
//	 # Function to add lecture details
	 
	print("enter lacture detailes:")
	name=input("lactures name:")
	subject=input("subject:")
	course=input("course:")
	self.lacturer.append({"name":name, "subject":subject, "course":course})
	self.lacturers_count+=1
	
	 def display_lecture_details(self):
//        # Function to display lecture details
       print("\n lacture detailes:")
       for lacture in self.lacturers:
       	 print(f"Lecturer's Name: {lecturer['Name']}")
            print(f"Subject: {lecturer['Subject']}")
            print(f"Course: {lecturer['Course']}")
            print("")
            
            if __name__ == "__main__":
    lecture_system = LectureDetails()
    
    while True:
        print("Lecture Management System")
        print("1. Add Lecture Details")
        print("2. Display Lecture Details")
        print("3. Exit")
        
        choice = input("Enter your choice: ")
        
        if choice == "1":
            lecture_system.add_lecture_details()
        elif choice == "2":
            lecture_system.display_lecture_details()
        elif choice == "3":
            print("Exiting the program.")
            break
        else:
            print("Invalid choice. Please try again.")



        