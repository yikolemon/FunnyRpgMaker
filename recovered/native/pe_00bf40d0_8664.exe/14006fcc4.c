/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006fcc4 */

undefined8 FUN_14006fcc4(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  pcVar2 = *(code **)(*(longlong *)(lVar1 + 0x2d8) + 8);
  if (pcVar2 == (code *)0x0) {
    uVar3 = 7;
  }
  else {
    uVar3 = (*pcVar2)(*(undefined8 *)(lVar1 + 0x98),param_1,*(undefined4 *)(lVar1 + 0x10),
                      FUN_14007a4de,0,lVar1);
  }
  return uVar3;
}

