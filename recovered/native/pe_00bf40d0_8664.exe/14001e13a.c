/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001e13a */

undefined4 FUN_14001e13a(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_48 [40];
  undefined1 local_20 [4];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  uVar5 = 0xffffffff;
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    plVar1 = *(longlong **)(*param_1 + 0x90);
    pcVar2 = *(code **)(*plVar1 + 0x30);
    if (pcVar2 != (code *)0x0) {
      puVar4 = (undefined8 *)(*pcVar2)(plVar1,"tt-cmaps");
      if (puVar4 != (undefined8 *)0x0) {
        iVar3 = (*(code *)*puVar4)(param_1,local_20);
        if (iVar3 == 0) {
          uVar5 = local_1c;
        }
      }
    }
  }
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStack_48)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStack_48);
}

