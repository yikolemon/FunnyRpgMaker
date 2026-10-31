/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011264b */

void FUN_14011264b(uint param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  undefined4 uVar4;
  
  lVar2 = DAT_140f2a910;
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x24f8);
  if (*(char *)(lVar1 + 0x239) == '\0') {
    FUN_14010e60a(lVar1);
  }
  if (*(char *)(lVar1 + 0x23a) == '\x01') {
    FUN_140110d38(lVar1);
  }
  *(uint *)(lVar1 + 0x94) = param_1 & 0xffff | *(int *)(lVar1 + 0x94) << 0x10;
  *(undefined4 *)(lVar1 + 0x88) = *(undefined4 *)(lVar2 + 0xe18);
  *(float *)(lVar1 + 0x84) = param_2;
  FUN_14011270c(lVar1);
  fVar3 = *(float *)(lVar1 + 0x88) + *(float *)(lVar1 + 0x88) + *(float *)(lVar1 + 0x80);
  *(float *)(lVar1 + 0x80) = fVar3;
  uVar4 = FUN_14007b71f(fVar3,param_2 + *(float *)(lVar1 + 0x7c));
  *(undefined4 *)(lVar1 + 0x80) = uVar4;
  *(undefined1 *)(*(longlong *)(lVar1 + 0x188) + 0x10e) = 1;
  return;
}

