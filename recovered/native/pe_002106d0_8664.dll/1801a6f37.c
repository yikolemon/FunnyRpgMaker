/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a6f37 */

void FUN_1801a6f37(void)

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
              ) < DAT_180420ac0) {
    FUN_18023d500(&DAT_180420ac0);
    if (DAT_180420ac0 == -1) {
      FUN_1801c2eb0(&DAT_180420980);
      FUN_18023d710(&LAB_1801c30a1);
      _Init_thread_footer(&DAT_180420ac0);
    }
  }
  local_68 = DAT_180328fc0;
  FUN_18010ca41(&local_68,4);
  FUN_18010ca66("Example: Log",&DAT_18041f1e7,0);
  FUN_180107e9e("imgui_demo.cpp",0x257b,"Examples/Log");
  cVar3 = FUN_18013425f("[Debug] Add 5 entries");
  if (cVar3 != '\0') {
    iVar5 = 5;
    do {
      puVar1 = (&PTR_s_info_180365abb_0x17_180328d80)[DAT_180420ac4 % 3];
      puVar2 = (&PTR_s_Bumfuzzled_180328da0)[DAT_180420ac4 % 7];
      uVar6 = FUN_180107f34();
      uVar4 = FUN_180107f41();
      FUN_1801c30ae(&DAT_180420980,
                    "[%05d] [%s] Hello, current time is %.1f, here\'s a word: \'%s\'\n",uVar4,puVar1
                    ,uVar6,puVar2);
      DAT_180420ac4 = DAT_180420ac4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_18010f900();
  FUN_1801c31ec(&DAT_180420980,"Example: Log",&DAT_18041f1e7);
  return;
}

