#ifndef ILLEGALWITHDRAWEXCEPTION_H
#define ILLEGALWITHDRAWEXCEPTION_H

class IllegalWithdrawException: public std::exception
{
public:
	IllegalWithdrawException() noexcept = default;
	~IllegalWithdrawException() = default;
	virtual const char* what() const noexcept {
		return "Illegal Withdraw exception";
	}

};

#endif // ILLEGALWITHDRAWEXCEPTION_H
