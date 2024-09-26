/*
Copyright (c) 2012-2020 Maarten Baert <maarten-baert@hotmail.com>

This file is part of SimpleScreenRecorder.

SimpleScreenRecorder is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

SimpleScreenRecorder is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with SimpleScreenRecorder.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "Icons.h"

QIcon g_icon_ssr, g_icon_ssr_idle, g_icon_ssr_error, g_icon_ssr_paused, g_icon_ssr_recording;
QIcon g_icon_go_home, g_icon_go_previous, g_icon_go_next, g_icon_folder_open;
QIcon g_icon_pause, g_icon_record;
QIcon g_icon_cancel, g_icon_save, g_icon_quit;
QIcon g_icon_microphone;

void LoadIcons() {

	g_icon_ssr = QIcon(":simplescreenrecorder.png");
	g_icon_ssr_idle = QIcon(":simplescreenrecorder-idle.png");
	g_icon_ssr_error = QIcon(":simplescreenrecorder-error.png");
	g_icon_ssr_paused = QIcon(":simplescreenrecorder-paused.png");
	g_icon_ssr_recording = QIcon(":simplescreenrecorder-recording.png");

	g_icon_go_home = QIcon(":go-home.png");
	if(QApplication::layoutDirection() == Qt::RightToLeft) {
		g_icon_go_previous = QIcon(":go-next.png");
		g_icon_go_next = QIcon(":go-previous.png");
	} else {
		g_icon_go_previous = QIcon(":go-previous.png");
		g_icon_go_next = QIcon(":go-next.png");
	}
	g_icon_folder_open = QIcon(":folder-open.png");

	g_icon_pause = QIcon(":media-playback-pause.png");
	g_icon_record = QIcon(":media-record.png");

	g_icon_cancel = QIcon(":process-stop.png");
	g_icon_save = QIcon(":document-save.png");
	g_icon_quit = QIcon(":application-exit.png");

	g_icon_microphone = QIcon(":audio-input-microphone.png");

}
