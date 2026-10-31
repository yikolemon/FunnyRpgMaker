/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400384ff */

int FUN_1400384ff(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [36];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)
           FUN_14001e961(*(longlong *)(param_1 + 0x98),*(int *)(param_1 + 0x10) * 2 + 800,&local_44)
  ;
  if (local_44 == 0) {
    FUN_1400b3c00((undefined1 (*) [32])(plVar1 + 9),0,0x2b8);
    *plVar1 = param_1;
    *(undefined4 *)(plVar1 + 1) = *(undefined4 *)(param_1 + 0x10);
    plVar1[2] = (longlong)(plVar1 + 100);
    plVar1[99] = param_3;
    *(undefined2 *)(plVar1 + 0x60) = 0;
    *(undefined8 *)((longlong)plVar1 + 0x304) = 0;
    *(undefined8 *)((longlong)plVar1 + 0x30c) = 0;
    *(undefined4 *)((longlong)plVar1 + 0x314) = 0;
    uVar2 = FUN_14002fd6a((longlong)plVar1);
    if ((char)uVar2 == '\0') {
      plVar1[7] = 0;
      plVar1[3] = 0;
      plVar1[4] = 0;
      plVar1[5] = 0;
    }
    else {
      lVar3 = FUN_140038717(plVar1);
      plVar1[3] = lVar3;
      lVar3 = (**(code **)(*(longlong *)(plVar1[99] + 0x48) + 0x20))();
      plVar1[4] = lVar3;
      FUN_140038759(plVar1);
    }
    FUN_140038940(plVar1);
    *(undefined4 *)(plVar1 + 8) = 0;
  }
  *param_2 = plVar1;
  if (DAT_14012ea80 == (local_40 ^ (ulonglong)auStack_68)) {
    return local_44;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_40 ^ (ulonglong)auStack_68);
}

