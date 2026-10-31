/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101288d4 */

undefined4 __fastcall FUN_101288d4(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  
  iVar3 = DAT_1039d74c;
  if (-1 < param_1) {
    iVar1 = *(int *)(DAT_1039d74c + 0x1490);
    do {
      if (param_2 == param_1) {
        return 0;
      }
      if (iVar1 <= param_1) {
        return 0;
      }
      uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x1498) + param_1 * 4);
      cVar4 = FUN_10117992(uVar2);
      if (cVar4 != '\0') {
        return uVar2;
      }
      param_1 = param_1 + param_3;
    } while (-1 < param_1);
  }
  return 0;
}

