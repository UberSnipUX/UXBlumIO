﻿//
// StreamView.xaml.cpp
// Implementation of the StreamView class
//

#include "pch.h"
#include "StreamView.xaml.h"

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

StreamView::StreamView()
{
	InitializeComponent();
	try {
		Windows::UI::Core::SystemNavigationManager::GetForCurrentView()->AppViewBackButtonVisibility = Windows::UI::Core::AppViewBackButtonVisibility::Visible;
	}
	catch (Platform::DisconnectedException^ e) {

	}
	Windows::UI::Core::SystemNavigationManager::GetForCurrentView()->BackRequested += ref new Windows::Foundation::EventHandler<Windows::UI::Core::BackRequestedEventArgs^>(this, &StreamView::goBack);
}


void UXBlumIO::StreamView::Image_DoubleTapped(Platform::Object^ sender, Windows::UI::Xaml::Input::DoubleTappedRoutedEventArgs^ e)
{
	//this->streamPlayerAlbumArtwork->Focus();
}
