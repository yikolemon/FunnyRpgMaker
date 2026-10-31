/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048c2b5 */

void __thiscall FUN_0048c2b5(void *this,undefined4 param_1,undefined4 param_2,byte param_3)

{
  uint uVar1;
  short *psVar2;
  int extraout_ECX;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  
  iVar3 = *(int *)((int)this + 0x440);
  if (*(int *)((int)this + 0x440) == 0) {
    iVar3 = (int)this + 0x3c;
  }
  uVar1 = FUN_0048c8ca((int)this + 0x3c);
  psVar4 = (short *)(iVar3 + uVar1 * 2 + -2);
  *(short **)((int)this + 0x30) = psVar4;
  lVar5 = CONCAT44(param_2,param_1);
  psVar2 = psVar4;
  while( true ) {
    if ((*(int *)((int)this + 0x24) < 1) && (lVar5 == 0)) break;
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + -1;
    lVar5 = __aulldvrm((uint)lVar5,(uint)((ulonglong)lVar5 >> 0x20),10,0);
    uVar1 = extraout_ECX + 0x30U & 0xffff;
    if (0x39 < uVar1) {
      uVar1 = (uint)(ushort)(short)(char)((param_3 ^ 1) * ' ' + '\a' + (char)uVar1);
    }
    *psVar2 = (short)(char)uVar1;
    *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + -2;
    psVar2 = *(short **)((int)this + 0x30);
  }
  *(int *)((int)this + 0x34) = (int)psVar4 - (int)psVar2 >> 1;
  *(short **)((int)this + 0x30) = psVar2 + 1;
  return;
}

