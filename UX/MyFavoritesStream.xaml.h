//
// MyFavoritesStream.xaml.h
// Declaration of the MyFavoritesStream class
//

#pragma once

#include "MyFavoritesStream.g.h"
#include "MainPage.xaml.h"

namespace UXBlumIO
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class MyFavoritesStream sealed
	{
		MainPage^ rootPage;


	private:
		void GoBack(void);
	protected:
		void OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigationEventArgs^ e) override;
	public:
		MyFavoritesStream();
	private:
		void gridView_ItemClick(Platform::Object^ sender, Windows::UI::Xaml::Controls::ItemClickEventArgs^ e);
		void gridView_SelectionChanged(Platform::Object^ sender, Windows::UI::Xaml::Controls::SelectionChangedEventArgs^ e);
	};
}
