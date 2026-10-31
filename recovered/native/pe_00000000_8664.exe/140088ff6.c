/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140088ff6 */

void FUN_140088ff6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = DAT_140f2a910;
  if (param_2 == 0) {
    uVar2 = DAT_1401c86c8;
    if (*(longlong *)(DAT_140f2a910 + 0x2188) == 0) {
      return;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(DAT_140f2a910 + 4);
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
                    /* WARNING: Could not recover jumptable at 0x000140089061. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0xd38))(param_2);
    return;
  }
  return;
}

