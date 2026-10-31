/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ffb49 */

undefined8 FUN_1801ffb49(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x3e0);
  if (*(longlong *)(lVar2 + 0x4d8) == 0) {
    uVar4 = 0xa3;
  }
  else {
    pcVar3 = *(code **)(*(longlong *)(lVar2 + 0x10d8) + 8);
    if (pcVar3 == (code *)0x0) {
      uVar4 = 7;
    }
    else {
      uVar4 = (*pcVar3)(*(undefined8 *)(lVar1 + 0x98),param_1,*(undefined4 *)(lVar2 + 0x20),
                        &LAB_180200be8,0,lVar1);
    }
  }
  return uVar4;
}

