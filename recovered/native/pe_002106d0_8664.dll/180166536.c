/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180166536 */

void FUN_180166536(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)*(short *)(*(longlong *)(param_1 + 0x18) + 0x56 + (longlong)param_2 * 0x74);
  *(short *)(param_1 + 0x21a) = (short)param_2;
  *(undefined2 *)(param_1 + 0x21c) = 0xffff;
  iVar1 = FUN_18016657b(param_1,iVar2);
  if (iVar1 != iVar2) {
    *(short *)(param_1 + 0x21c) = (short)iVar1;
  }
  return;
}

