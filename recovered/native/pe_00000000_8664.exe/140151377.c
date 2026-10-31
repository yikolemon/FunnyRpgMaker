/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140151377 */

ulonglong FUN_140151377(longlong param_1,undefined8 *param_2)

{
  char *pcVar1;
  int iVar2;
  ulonglong uVar3;
  
  pcVar1 = (char *)*param_2;
  if (*pcVar1 == -1) {
    iVar2 = ((uint)(byte)pcVar1[3] | (uint)(byte)pcVar1[2] << 8 | (uint)(byte)pcVar1[1] << 0x10) *
            0x100 + 0x8000;
  }
  else {
    if (*pcVar1 != '\x1e') {
      uVar3 = FUN_140151cd1(pcVar1,*(undefined8 *)(param_1 + 0x10));
      return uVar3;
    }
    iVar2 = FUN_14015190b(pcVar1,*(undefined8 *)(param_1 + 0x10),0,0);
  }
  return (ulonglong)(uint)(iVar2 >> 0x10);
}

