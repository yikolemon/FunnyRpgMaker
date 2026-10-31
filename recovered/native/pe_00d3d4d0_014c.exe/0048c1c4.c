/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048c1c4 */

void __thiscall FUN_0048c1c4(void *this,uint param_1,uint param_2)

{
  short *psVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  
  iVar4 = *(int *)((int)this + 0x440);
  if (*(int *)((int)this + 0x440) == 0) {
    iVar4 = (int)this + 0x3c;
  }
  uVar3 = FUN_0048c8ca((int)this + 0x3c);
  psVar1 = (short *)(iVar4 + -2 + uVar3 * 2);
  *(short **)((int)this + 0x30) = psVar1;
  psVar5 = psVar1;
  do {
    iVar4 = *(int *)((int)this + 0x24);
    if (iVar4 < 1) {
      if (param_1 == 0 && param_2 == 0) {
        *(int *)((int)this + 0x34) = (int)psVar1 - (int)psVar5 >> 1;
        *(short **)((int)this + 0x30) = psVar5 + 1;
        return;
      }
      iVar4 = *(int *)((int)this + 0x24);
    }
    *(int *)((int)this + 0x24) = iVar4 + -1;
    uVar2 = (ushort)param_1;
    param_1 = param_1 >> 3 | param_2 << 0x1d;
    *psVar5 = (uVar2 & 7) + 0x30;
    param_2 = param_2 >> 3;
    *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + -2;
    psVar5 = *(short **)((int)this + 0x30);
  } while( true );
}

