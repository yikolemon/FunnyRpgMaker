/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140086de0 */

undefined8 FUN_140086de0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 *puVar7;
  int local_108 [2];
  LPVOID local_100;
  undefined1 local_f8;
  LPVOID local_f0;
  undefined1 local_e8;
  LPVOID local_e0;
  undefined2 local_d8;
  LPVOID local_d0;
  undefined2 local_c8;
  LPVOID local_c0;
  undefined1 local_b8;
  LPVOID local_b0;
  undefined1 local_a8;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined8 local_70 [8];
  
  puVar5 = (undefined8 *)0x0;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    puVar4 = (undefined8 *)FUN_1400863a0(0x40);
    puVar7 = puVar5;
    if (puVar4 != (undefined8 *)0x0) {
      lVar1 = *(longlong *)(param_2 + 8);
      if (lVar1 == 0) {
        pcVar6 = "";
      }
      else {
        pcVar6 = *(char **)(lVar1 + 0x28);
        if (pcVar6 == (char *)0x0) {
          pcVar6 = (char *)(lVar1 + 0x30);
        }
      }
      FUN_140086460(local_108,0);
      local_100 = (LPVOID)0x0;
      local_f8 = 0;
      local_f0 = (LPVOID)0x0;
      local_e8 = 0;
      local_e0 = (LPVOID)0x0;
      local_d8 = 0;
      local_d0 = (LPVOID)0x0;
      local_c8 = 0;
      local_c0 = (LPVOID)0x0;
      local_b8 = 0;
      local_b0 = (LPVOID)0x0;
      local_a8 = 0;
      if (pcVar6 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_140086b10(0x14011d058);
      }
      FUN_1400865d0((longlong)local_108,pcVar6);
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = std::codecvt<wchar_t,char,_Mbstatet>::vftable;
      puVar5 = FUN_140088960(local_70);
      uVar2 = puVar5[1];
      local_90 = puVar5[2];
      uStack_88 = (undefined4)puVar5[3];
      uVar3 = *(undefined8 *)((longlong)puVar5 + 0x1c);
      uStack_7c = *(undefined8 *)((longlong)puVar5 + 0x24);
      uStack_84 = (undefined4)uVar3;
      uStack_80 = (undefined4)((ulonglong)uVar3 >> 0x20);
      puVar4[2] = *puVar5;
      puVar4[3] = uVar2;
      puVar4[4] = local_90;
      puVar4[5] = CONCAT44(uStack_84,uStack_88);
      *(undefined8 *)((longlong)puVar4 + 0x2c) = uVar3;
      *(undefined8 *)((longlong)puVar4 + 0x34) = uStack_7c;
      puVar5 = puVar4;
      puVar7 = (undefined8 *)0x1;
    }
    *param_1 = (longlong)puVar5;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_140086690((longlong)local_108);
      if (local_b0 != (LPVOID)0x0) {
        thunk_FUN_1400a1290(local_b0);
      }
      local_b0 = (LPVOID)0x0;
      if (local_c0 != (LPVOID)0x0) {
        thunk_FUN_1400a1290(local_c0);
      }
      local_c0 = (LPVOID)0x0;
      if (local_d0 != (LPVOID)0x0) {
        thunk_FUN_1400a1290(local_d0);
      }
      local_d0 = (LPVOID)0x0;
      if (local_e0 != (LPVOID)0x0) {
        thunk_FUN_1400a1290(local_e0);
      }
      local_e0 = (LPVOID)0x0;
      if (local_f0 != (LPVOID)0x0) {
        thunk_FUN_1400a1290(local_f0);
      }
      local_f0 = (LPVOID)0x0;
      if (local_100 != (LPVOID)0x0) {
        thunk_FUN_1400a1290(local_100);
      }
      local_100 = (LPVOID)0x0;
      FUN_1400864b0(local_108);
    }
  }
  return 2;
}

