/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ecbbb */

void FUN_1400ecbbb(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c
              ) < DAT_140f32210) {
    FUN_140188840(&DAT_140f32210);
    if (DAT_140f32210 == -1) {
      FUN_140108bb4(&DAT_140f320d0);
      FUN_140188b50(&LAB_140108da5);
      _Init_thread_footer(&DAT_140f32210);
    }
  }
  local_68 = DAT_140e8d360;
  FUN_140085d59(&local_68,4);
  FUN_140085d7e("Example: Log",&DAT_140f30937,0);
  FUN_1400811b6("imgui_demo.cpp",0x257b,"Examples/Log");
  cVar3 = FUN_1400ad18f("[Debug] Add 5 entries");
  if (cVar3 != '\0') {
    iVar5 = 5;
    do {
      puVar1 = (&PTR_s_info_140ec6f18_0x17_140e8d110)[DAT_140f32214 % 3];
      puVar2 = (&PTR_s_Bumfuzzled_140e8d130)[DAT_140f32214 % 7];
      uVar6 = FUN_14008124c();
      uVar4 = FUN_140081259();
      FUN_140108db2(&DAT_140f320d0,
                    "[%05d] [%s] Hello, current time is %.1f, here\'s a word: \'%s\'\n",uVar4,puVar1
                    ,uVar6,puVar2);
      DAT_140f32214 = DAT_140f32214 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_140088c18();
  FUN_140108ef0(&DAT_140f320d0,"Example: Log",&DAT_140f30937);
  return;
}

