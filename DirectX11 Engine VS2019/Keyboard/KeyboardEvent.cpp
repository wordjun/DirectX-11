#include "KeyboardEvent.h"

KeyboardEvent::KeyboardEvent()
	://constructor(initialize mem.vars
	type(EventType::Invalid),
	key(0u)
{
	
}

KeyboardEvent::KeyboardEvent(const EventType type, const unsigned char key)
	:
	type(type),
	key(key)
{

}

bool KeyboardEvent::isPress() const
{
	return this->type == EventType::Press;
}

bool KeyboardEvent::isRelease() const
{
	return this->type == EventType::Release;
}

bool KeyboardEvent::isValid() const
{
	return this->type == EventType::Invalid;
}

unsigned char KeyboardEvent::GetKeyCode() const
{
	return this->key;
}

