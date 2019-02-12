#pragma once

struct WorldLocation {
	/*WorldLocation*/ public: /*static*/ unsigned int /*__cdecl*/ FUBI_PodGetSize(); //0x00403ede
	/*WorldLocation*/ public: bool /*__thiscall*/ GetMinor() const; //0x00403ee5
	/*WorldLocation*/ public: gpbstring<char> /*__thiscall*/ GetClothMapHideGroup() const; //0x004060e0
	/*WorldLocation*/ public: gpbstring<char> /*__thiscall*/ GetClothMapRollover() const; //0x004060b4
	/*WorldLocation*/ public: gpbstring<char> /*__thiscall*/ GetClothMapShowGroup() const; //0x004060ca
	/*WorldLocation*/ public: gpbstring<char> /*__thiscall*/ GetClothMapWindow() const; //0x004060f6
	/*WorldLocation*/ public: gpbstring<char> /*__thiscall*/ GetName() const; //0x0040609e
	/*WorldLocation*/ public: gpbstring<char> /*__thiscall*/ GetScreenNameAnsi() const; //0x00405341
	/*WorldLocation*/ public: const vector_3& /*__thiscall*/ GetClothMapPos() const; //0x00403ee9
	/*WorldLocation*/ public: int /*__thiscall*/ GetId() const; //0x00403ee2
};