/*
 * UI_supervisor_t.h
 *
 *  Created on: Jun 26, 2017
 *      Author: yuval
 */

#ifndef UI_SUPERVISOR_T_H_
#define UI_SUPERVISOR_T_H_

#include "I_UI_t.h"

using namespace std;

class UI_supervisor_t : public I_UI_t {
	public:
		/* Default Constructor */
		UI_supervisor_t();

		/* Deconstructor */
		virtual ~UI_supervisor_t();

		void UI_do();

		void connect(const Manager_t* _comm);

		/* Inherited
		*/

	private:
		bool level1() const; // return true to exit
		void addPassenger() const;
		uint chooseUniqeID() const;
		uint showPassenger() const;
		void removePassenger() const;
		void printOut(const vector<string> _info) const;
		uint addFlight(void) const;
		void showFlight(uint _flightID) const;
		uint showFlight() const;
		void showFlights() const;
		void removeFlight() const;
		uint orderTicket() const;
		void cancelTicket() const;
		void showTicket() const;
		void showTickets() const;
		void showTicket(uint _ticketNum) const;


		/* Inherited
		 */

		/* Disable the following by default */
		UI_supervisor_t(const UI_supervisor_t& other);
		UI_supervisor_t& operator=(const UI_supervisor_t& other);

		Manager_t* m_mangerPtr;
};

#endif /* ifndef UI_SUPERVISOR_T_H_ */