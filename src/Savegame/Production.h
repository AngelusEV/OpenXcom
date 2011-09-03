#ifndef OPENXCOM_PRODUCTION
#define OPENXCOM_PRODUCTION
namespace OpenXcom
{
class RuleItem;
class Base;
class SavedGame;
class Production
{
public:
	Production (RuleItem * item, int todo);
	int getNumberOfItemTodo () const;
	void setNumberOfItemTodo (int);
	int getTimeSpent () const;
	void setTimeSpent (int);
	int getNumberOfItemDone () const;
	int getAssignedEngineers() const;
	void setAssignedEngineers (int);
	bool step(Base * b, SavedGame * g, bool & newItemPossible);
	const RuleItem * getRuleItem() const;
	void startItem(Base * b, SavedGame * g);
private:
	RuleItem * _item;
	int _todo;
	int _timeSpent;
	int _engineers;
};
}
#endif
