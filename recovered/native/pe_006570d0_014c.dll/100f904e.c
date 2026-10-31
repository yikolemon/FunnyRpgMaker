/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f904e */

void __thiscall FUN_100f904e(int param_1,ushort param_2)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = *(short *)(param_1 + 0xbae);
  if ((param_2 != 0 || sVar1 != 0) && (*(char *)(param_1 + 0xbad) != '\0')) {
    if ((param_2 & 0xfc00) == 0xd800) {
      if (sVar1 != 0) {
        FUN_100f8f50(0xfffd);
      }
      *(ushort *)(param_1 + 0xbae) = param_2;
    }
    else {
      if (sVar1 != 0) {
        uVar2 = 0xfffd;
        if ((param_2 & 0xfc00) != 0xdc00) {
          FUN_100f8f50(0xfffd);
          uVar2 = param_2;
        }
        param_2 = uVar2;
        *(undefined2 *)(param_1 + 0xbae) = 0;
      }
      FUN_100f8f50(param_2);
    }
  }
  return;
}

