/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180100412 */

void FUN_180100412(int *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = *(longlong *)(param_1 + 0xc);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 10);
    if ((*(byte *)(lVar3 + 0x2acc) & 0x20) != 0) {
      FUN_1800fdfea("Clipper: End() in \'%s\'\n",*(undefined8 *)(*(longlong *)(lVar3 + 0x1608) + 8))
      ;
    }
    if (((uint)param_1[3] < 0x7fffffff) && (-1 < *param_1)) {
      FUN_1801007c2(param_1);
    }
    *(undefined4 *)(lVar2 + 0xc) = *(undefined4 *)(lVar2 + 0x18);
    iVar1 = *(int *)(lVar3 + 0x24e0);
    *(int *)(lVar3 + 0x24e0) = iVar1 + -1;
    if (1 < (longlong)iVar1) {
      plVar4 = (longlong *)(*(longlong *)(lVar3 + 0x24f0) + (longlong)iVar1 * 0x28 + -0x50);
      *(longlong **)(*plVar4 + 0x30) = plVar4;
    }
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  param_1[1] = param_1[3];
  *param_1 = param_1[3];
  param_1[3] = -1;
  return;
}

