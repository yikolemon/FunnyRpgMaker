/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013a5b7 */

int FUN_14013a5b7(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [36];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)
           FUN_14012afda(*(undefined8 *)(param_1 + 0x98),*(int *)(param_1 + 0x10) * 2 + 800,
                         &local_44);
  if (local_44 == 0) {
    FUN_1401c5830(plVar2 + 9,0,0x2b8);
    *plVar2 = param_1;
    *(undefined4 *)(plVar2 + 1) = *(undefined4 *)(param_1 + 0x10);
    plVar2[2] = (longlong)(plVar2 + 100);
    plVar2[99] = param_3;
    *(undefined2 *)(plVar2 + 0x60) = 0;
    *(undefined8 *)((longlong)plVar2 + 0x304) = 0;
    *(undefined8 *)((longlong)plVar2 + 0x30c) = 0;
    *(undefined4 *)((longlong)plVar2 + 0x314) = 0;
    cVar1 = FUN_140131e22(plVar2);
    if (cVar1 == '\0') {
      plVar2[7] = 0;
      plVar2[3] = 0;
      plVar2[4] = 0;
      plVar2[5] = 0;
    }
    else {
      lVar3 = FUN_14013a7cf(plVar2);
      plVar2[3] = lVar3;
      lVar3 = (**(code **)(*(longlong *)(plVar2[99] + 0x48) + 0x20))();
      plVar2[4] = lVar3;
      FUN_14013a811(plVar2);
    }
    FUN_14013a9f8(plVar2);
    *(undefined4 *)(plVar2 + 8) = 0;
  }
  *param_2 = (longlong)plVar2;
  if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_68)) {
    return local_44;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_40 ^ (ulonglong)auStack_68);
}

