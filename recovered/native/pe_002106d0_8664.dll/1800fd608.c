/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fd608 */

void FUN_1800fd608(longlong param_1,ushort param_2)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = *(short *)(param_1 + 0xbe6);
  if ((param_2 != 0 || sVar1 != 0) && (*(char *)(param_1 + 0xbe5) != '\0')) {
    if ((param_2 & 0xfc00) != 0xd800) {
      uVar2 = param_2;
      if (sVar1 != 0) {
        uVar2 = 0xfffd;
        if ((param_2 & 0xfc00) != 0xdc00) {
          FUN_1800fd4f8(param_1,0xfffd);
          uVar2 = param_2;
        }
        *(undefined2 *)(param_1 + 0xbe6) = 0;
      }
      FUN_1800fd4f8(param_1,uVar2);
      return;
    }
    if (sVar1 != 0) {
      FUN_1800fd4f8(param_1,0xfffd);
    }
    *(ushort *)(param_1 + 0xbe6) = param_2;
  }
  return;
}

