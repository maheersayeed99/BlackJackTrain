Polygon Editor - Polygon Crest
By Captain YS
http://www.ysflight.com




[はじめに]

「Polygon Crest」はポリゴンエディタ（ポリゴンモデラと呼ぶ方が一般的かも）で、3次元ポリゴンモデルを作成・編集することができる。もともとの目的はYS FLIGHT SIMULATOR用の飛行機・地上物形状を編集するために開発したプログラムだが、STL形式の出力も可能なので、たとえば立体として正しいデータを作れば、三次元プリンタ用のデータを出力することもできる。飛行機モデルを作りやすいように意識しているので、代表的な翼断面系を簡単に作成する機能や、それを、翼平面系に沿ってスイープした形を作成することも可能。また、集合演算、簡単な丸め機能も搭載している。

使い方は、次のURLで参照することができる。

http://polycre.help.jp.ysflight.com/   (日本語版)
http://polycre.help.en.ysflight.com/   (英語版)

ただ、説明はかなり書きかけなので、ほんの一部の機能しかカバーできていない。残りは、これから順次追加していく予定でいる。

20150810バージョンから、MacOSXとLinuxのバイナリパッケージを統一しました。Linux上での実行方法は、以下の「プログラムの起動」を参照してください。
20160220バージョンから、Linux用インストーラ (Python script) を試しに同梱しました。




[寄付について]
もしも、1000円ぐらい寄付してもかまわない、という方がいましたら、以下URLより一口1000円でご送金いただけると大変感謝いたします。

    http://s.shop.vector.co.jp/service/servlet/NCart.Add?ITEM_NO=SR360800

ご送金いただいた金額は、開発環境のアップグレード、資料の購入、その他YSFLIGHT.COMのメンテナンス、コンテンツ作成の費用に使わせていただきます。よろしくお願いします。





[プログラムの起動]
MacOSXの場合 -> ダウンロードしたZipを解凍して bin ディレクトリのPolygonCrestをダブルクリック(64ビット版のみ)

Linuxの場合 -> ダウンロードしたZipを解凍して "bin/Polygon Crest.app/Contents/Resources/ysgebl32" (32ビット版)または、"bin/Polygon Crest.app/Contents/Resources/ysgebl64" (64ビット版)をダブルクリック。(あるいは、LinuxInstaller.pyをダブルクリックして実行するとデスクトップにアイコンができるので、そのアイコンからも起動可能。)

Windowsの場合  -> ダウンロードしたZipを解凍して bin ディレクトリのysgebl32.exe (32ビット版)または ysgebl64.exe (64ビット版)をダブルクリック。





[ソースコード]
ソースコードはGithubからダウンロードできる。コンパイルするには、次のステップでコマンドを入力する。

git clone https://github.com/captainys/public
mkdir build
cd build
cmake ../public/src
history
cmake --build . --config Release

このコマンドは、buildディレクトリの ysgebl/src/main/Release サブディレクトリに実行ファイルを生成する。





[ライセンスについて]

とりあえず、20160220版とそれ以前のバージョンは、BSDライセンスでフリー。今後のバージョンでは変わるかもしれない。

なお、BSDライセンスの条項は以下を参照。

/* ////////////////////////////////////////////////////////////

PolygonCrest
Copyright (c) 2014 Soji Yamakawa.  All rights reserved.
http://www.ysflight.com

Redistribution and use in source and binary forms, with or without modification, 
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, 
   this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, 
   this list of conditions and the following disclaimer in the documentation 
   and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, 
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR 
PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS 
BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE 
GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) 
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT 
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT 
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

//////////////////////////////////////////////////////////// */
