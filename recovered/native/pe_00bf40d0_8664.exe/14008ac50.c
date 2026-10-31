/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008ac50 */

undefined8 FUN_14008ac50(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int local_a8 [2];
  LPVOID local_a0;
  undefined1 local_98;
  LPVOID local_90;
  undefined1 local_88;
  LPVOID local_80;
  undefined2 local_78;
  LPVOID local_70;
  undefined2 local_68;
  LPVOID local_60;
  undefined1 local_58;
  LPVOID local_50;
  undefined1 local_48;
  
  puVar4 = (undefined8 *)0x0;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    puVar2 = (undefined8 *)FUN_1400863a0(0x10);
    puVar5 = puVar4;
    if (puVar2 != (undefined8 *)0x0) {
      lVar1 = *(longlong *)(param_2 + 8);
      if (lVar1 == 0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = *(char **)(lVar1 + 0x28);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = (char *)(lVar1 + 0x30);
        }
      }
      FUN_140086460(local_a8,0);
      local_a0 = (LPVOID)0x0;
      local_98 = 0;
      local_90 = (LPVOID)0x0;
      local_88 = 0;
      local_80 = (LPVOID)0x0;
      local_78 = 0;
      local_70 = (LPVOID)0x0;
      local_68 = 0;
      local_60 = (LPVOID)0x0;
      local_58 = 0;
      local_50 = (LPVOID)0x0;
      local_48 = 0;
      if (pcVar3 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_140086b10(0x14011d058);
      }
      FUN_1400865d0((longlong)local_a8,pcVar3);
      puVar4 = (undefined8 *)0x1;
      *(undefined4 *)(puVar2 + 1) = 0;
      *puVar2 = std::codecvt<char,char,_Mbstatet>::vftable;
      puVar5 = puVar2;
    }
    *param_1 = (longlong)puVar5;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_140086690((longlong)local_a8);
      if (local_50 != (LPVOID)0x0) {
        thunk_FUN_1400a1290(local_50);
      }
      local_50 = (LPVOID)0x0;
      if (local_60 != (LPVOID)0x0) {
        thunk_FUN_1400a1290(local_60);
      }
      local_60 = (LPVOID)0x0;
      if (local_70 != (LPVOID)0x0) {
        thunk_FUN_1400a1290(local_70);
      }
      local_70 = (LPVOID)0x0;
      if (local_80 != (LPVOID)0x0) {
        thunk_FUN_1400a1290(local_80);
      }
      local_80 = (LPVOID)0x0;
      if (local_90 != (LPVOID)0x0) {
        thunk_FUN_1400a1290(local_90);
      }
      local_90 = (LPVOID)0x0;
      if (local_a0 != (LPVOID)0x0) {
        thunk_FUN_1400a1290(local_a0);
      }
      local_a0 = (LPVOID)0x0;
      FUN_1400864b0(local_a8);
    }
  }
  return 2;
}

