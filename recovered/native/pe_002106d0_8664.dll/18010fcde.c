/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010fcde */

void FUN_18010fcde(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = DAT_180419160;
  if (param_2 == 0) {
    uVar2 = DAT_1802ac570;
    if (*(longlong *)(DAT_180419160 + 0x2188) == 0) {
      return;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(DAT_180419160 + 4);
    if (*(longlong *)(lVar1 + 0x2188) == param_2) {
      return;
    }
    uVar2 = *(undefined4 *)(param_2 + 0x30);
  }
  *(undefined4 *)(lVar1 + 0x1330) = uVar2;
  *(longlong *)(lVar1 + 0x2188) = param_2;
  if (*(char *)(lVar1 + 0x8a) == '\x01') {
    *(undefined4 *)(lVar1 + 0xdb0) = uVar2;
  }
  if ((param_2 != 0) && (*(code **)(lVar1 + 0xd38) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00018010fd49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0xd38))(param_2);
    return;
  }
  return;
}

