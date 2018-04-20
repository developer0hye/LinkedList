#pragma once

#include <iostream>

using std::ostream;

namespace kw
{
	template<typename T>
	class Node
	{
	public:
		T			mData;
		Node<T>*	mNextNode;

		Node(const T& data)
			:
			mData(data),
			mNextNode(NULL)
		{
		}

		Node(const T& data, Node<T>* nextNode)
			:
			mData(data),
			mNextNode(nextNode)
		{
		}

		Node()
			:
			mData(NULL),
			mNextNode(NULL)
		{
		}
	};

	template <typename T>
	class LinkedList
	{

	private:
		Node<T>*			mHead;
		unsigned int		mSize;

	public:
		LinkedList();
		~LinkedList();

                virtual T                       get(const int index) const;
		virtual bool			set(const int index, const T& data);

		virtual bool			insert(const T& data);
		virtual bool			insert(const int index, const T& data);

		virtual bool			insertHead(const T& data);

		virtual bool			pop();
		virtual bool			pop(const int index);

		virtual unsigned int	size()	const;
		virtual bool			empty() const;

		virtual void			clear();

		friend ostream& operator<<(ostream& os, const LinkedList<T>& data)
		{
			if (data.mHead == NULL)
			{
				os << "This linked list is empty." << endl;
			}
			else
			{
				os << "------------------------------------" << endl;

				os << "------------------------------------" << endl;
			}

			return os;
		}
	};
}
