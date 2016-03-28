//
// MyFavoritesStream.xaml.cpp
// Implementation of the MyFavoritesStream class
//

#include "pch.h"
#include "StreamView.xaml.h"
#include "MyFavoritesStream.xaml.h"

using namespace UXBlumIO;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238

MyFavoritesStream::MyFavoritesStream()
{
	InitializeComponent();
	//Windows::UI::Core::SystemNavigationManager::GetForCurrentView()->BackRequested += ref new Windows::Foundation::EventHandler<Windows::UI::Core::BackRequestedEventArgs^>(this, &MyFavoritesStream::GoBack);

}

void MyFavoritesStream::OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigationEventArgs^ e) {
	/*DATA_UTILS::KeenIOCollectionData2^ it;
	if (dynamic_cast<DATA_UTILS::KeenIOCollectionData2^>(e->Parameter) != nullptr) {
		it = dynamic_cast<DATA_UTILS::KeenIOCollectionData2^>(e->Parameter);
	}*/

	MainPage^ mp = dynamic_cast<MainPage^>(e->Parameter);

	if (mp != nullptr) {
		this->rootPage = mp;
	}

	int* x = 0;
	x++;

	return;

}

void UXBlumIO::MyFavoritesStream::gridView_ItemClick(Platform::Object^ sender, Windows::UI::Xaml::Controls::ItemClickEventArgs^ e)
{
	this->rootPage->Frame->Navigate(StreamView::typeid);
}


void UXBlumIO::MyFavoritesStream::gridView_SelectionChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::SelectionChangedEventArgs^ e)
{
	this->rootPage->Frame->Navigate(StreamView::typeid);

}
