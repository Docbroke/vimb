/**
 * vimb - a webkit based vim like browser.
 *
 * Copyright (C) 2012-2013 Daniel Carl
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see http://www.gnu.org/licenses/.
 */

#ifndef _CONFIG_H
#define _CONFIG_H

#include "stdlib.h"

/* time in seconds after that message will be removed from inputbox if the
 * message where only temporary */
#define MESSAGE_TIMEOUT             5
#define SETTING_MAX_CONNS           25
#define SETTING_MAX_CONNS_PER_HOST  5

const unsigned int MAXIMUM_HINTS = 500;

const unsigned int COMMAND_HISTORY_SIZE = 30;

const struct {
    char* command;
} default_config[] = {
    {"nmap gf=source"},
    {"nmap gF=inspect"},
    {"nmap <shift-:>=input"},
    {"nmap <shift-/>=input /"},
    {"nmap <shift-?>=input ?"},
    {"smap n=search-forward"},
    {"smap N=search-backward"},
    {"nmap o=input :open "},
    {"nmap t=input :tabopen "},
    {"nmap O=inputuri :open "},
    {"nmap T=inputuri :tabopen "},
    {"nmap gh=open"},
    {"nmap gH=tabopen"},
    {"nmap u=open-closed"},
    {"nmap U=tabopen-closed"},
    {"nmap d=quit"},
    {"nmap <ctrl-o>=back"},
    {"nmap <ctrl-i>=forward"},
    {"nmap r=reload"},
    {"nmap R=reload!"},
    {"nmap <ctrl-c>=stop"},
    {"nmap <ctrl-f>=pagedown"},
    {"nmap <ctrl-b>=pageup"},
    {"nmap <ctrl-d>=halfpagedown"},
    {"nmap <ctrl-u>=halfpageup"},
    {"nmap gg=jumptop"},
    {"nmap G=jumpbottom"},
    {"nmap 0=jumpleft"},
    {"nmap $=jumpright"},
    {"nmap h=scrollleft"},
    {"nmap l=scrollright"},
    {"nmap k=scrollup"},
    {"nmap j=scrolldown"},
    {"nmap f=hint-link"},
    {"nmap F=hint-link-new"},
    {"nmap ;o=hint-input-open"},
    {"nmap ;t=hint-input-tabopen"},
    {"nmap ;y=hint-yank"},
    {"nmap ;i=hint-image-open"},
    {"nmap ;I=hint-image-tabopen"},
    {"nmap y=yank-uri"},
    {"nmap Y=yank-selection"},
    {"nmap p=open-clipboard"},
    {"nmap P=tabopen-clipboard"},
    {"nmap zi=zoomin"},
    {"nmap zI=zoominfull"},
    {"nmap zo=zoomout"},
    {"nmap zO=zoomoutfull"},
    {"nmap zz=zoomreset"},
    {"cmap <tab>=complete"},
    {"cmap <shift-tab>=complete-back"},
    {"cmap <ctrl-p>=command-hist-prev"},
    {"cmap <ctrl-n>=command-hist-next"},
    {"hmap <tab>=hint-focus-next"},
    {"hmap <shift-tab>=hint-focus-prev"},
    {"searchengine-add dl=https://duckduckgo.com/lite/?q=%s"},
    {"searchengine-add dd=https://duckduckgo.com/?q=%s"},
    {"set images=on"},
    {"set shrinkimages=on"},
    {"set cursivfont=serif"},
    {"set defaultencondig=utf-8"},
    {"set defaultfont=sans-serif"},
    {"set fontsize=11"},
    {"set monofontsize=11"},
    {"set caret=off"},
    {"set webinspector=off"},
    {"set dnsprefetching=on"},
    {"set dompaste=off"},
    {"set frameflattening=off"},
    {"set enable-file-access-from-file-uris=off"},
    {"set enable-html5-database=off"},
    {"set enable-html5-local-storage=off"},
    {"set javaapplet=off"},
    {"set offlinecache=on"},
    {"set pagecache=on"},
    {"set plugins=on"},
    {"set scripts=on"},
    {"set enable-site-specific-quirks=off"},
    {"set enable-spatial-navigation=off"},
    {"set spell=off"},
    {"set enable-universal-access-from-file-uris=off"},
    {"set enable-webgl=off"},
    {"set xssauditor=on"},
    {"set enforce-96-dpi=off"},
    {"set fantasyfont=serif"},
    {"set javascript-can-access-clipboard=off"},
    {"set javascript-can-open-windows-automatically=off"},
    {"set minimumfontsize=5"},
    {"set minimum-logical-font-size=5"},
    {"set monofont=monospace"},
    {"set backgrounds=on"},
    {"set resizetextareas=on"},
    {"set sansfont=sens-serif"},
    {"set seriffont=serif"},
    {"set spelllang="},
    {"set tab-key-cycles-through-elements=on"},
    {"set useragent=vimb/" VERSION " (X11; Linux i686) AppleWebKit/535.22+ Compatible (Safari)"},
    {"set zoomstep=0.1"},
    {"set stylesheet=on"},
    {"set proxy=on"},
    {"set cookie-timeout=4800"},
    {"set strict-ssl=on"},
    {"set scrollstep=40"},
    {"set status-color-bg=#000"},
    {"set status-color-fg=#fff"},
    {"set status-font=monospace bold 8"},
    {"set status-ssl-color-bg=#95e454"},
    {"set status-ssl-color-fg=#000"},
    {"set status-ssl-font=monospace bold 8"},
    {"set status-sslinvalid-color-bg=#f08080"},
    {"set status-sslinvalid-color-fg=#000"},
    {"set status-sslinvalid-font=monospace bold 8"},
    {"set input-bg-normal=#fff"},
    {"set input-bg-error=#f00"},
    {"set input-fg-normal=#000"},
    {"set input-fg-error=#000"},
    {"set input-font-normal=monospace normal 8"},
    {"set input-font-error=monospace bold 8"},
    {"set completion-font=monospace normal 8"},
    {"set completion-fg-normal=#f6f3e8"},
    {"set completion-fg-active=#fff"},
    {"set completion-bg-normal=#656565"},
    {"set completion-bg-active=#777"},
    {"set max-completion-items=15"},
    {"set hint-bg=#ff0"},
    {"set hint-bg-focus=#8f0"},
    {"set hint-fg=#000"},
    {"set hint-style=position:absolute;z-index:100000;font-family:monospace;font-weight:bold;font-size:10px;color:#000;background-color:#fff;margin:0;padding:0px 1px;border:1px solid #444;opacity:0.7;"},
    {"set ca-bundle=/etc/ssl/certs/ca-certificates.crt"},
    {"set home-page=https://github.com/fanglingsu/vimb"},
    {"set download-path=/tmp/vimb"},
    {"set history-max-items=500"},
    {NULL}
};

#endif /* end of include guard: _CONFIG_H */
