/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048c244 */

void __thiscall FUN_0048c244(void *this,uint param_1)

{
  short *psVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this + 0x440);
  if (*(int *)((int)this + 0x440) == 0) {
    iVar4 = (int)this + 0x3c;
  }
  uVar2 = FUN_0048c8ca((int)this + 0x3c);
  psVar1 = (short *)(iVar4 + -2 + uVar2 * 2);
  *(short **)((int)this + 0x30) = psVar1;
  psVar3 = psVar1;
  for (; (0 < *(int *)((int)this + 0x24) || (param_1 != 0)); param_1 = param_1 >> 3) {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + -1;
    *psVar3 = ((ushort)param_1 & 7) + 0x30;
    *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + -2;
    psVar3 = *(short **)((int)this + 0x30);
  }
  *(int *)((int)this + 0x34) = (int)psVar1 - (int)psVar3 >> 1;
  *(short **)((int)this + 0x30) = psVar3 + 1;
  return;
}

