/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048c35a */

void __thiscall FUN_0048c35a(void *this,uint param_1,byte param_2)

{
  uint uVar1;
  short *psVar2;
  char cVar3;
  int iVar4;
  short *psVar5;
  
  iVar4 = *(int *)((int)this + 0x440);
  if (*(int *)((int)this + 0x440) == 0) {
    iVar4 = (int)this + 0x3c;
  }
  uVar1 = FUN_0048c8ca((int)this + 0x3c);
  psVar5 = (short *)(iVar4 + uVar1 * 2 + -2);
  *(short **)((int)this + 0x30) = psVar5;
  psVar2 = psVar5;
  while ((0 < *(int *)((int)this + 0x24) || (param_1 != 0))) {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + -1;
    uVar1 = param_1 % 10 + 0x30;
    cVar3 = (char)uVar1;
    if (0x39 < uVar1) {
      cVar3 = (param_2 ^ 1) * ' ' + '\a' + cVar3;
    }
    *psVar2 = (short)cVar3;
    *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + -2;
    psVar2 = *(short **)((int)this + 0x30);
    param_1 = param_1 / 10;
  }
  *(int *)((int)this + 0x34) = (int)psVar5 - (int)psVar2 >> 1;
  *(short **)((int)this + 0x30) = psVar2 + 1;
  return;
}

