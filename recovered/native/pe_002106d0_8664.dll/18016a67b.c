/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016a67b */

void FUN_18016a67b(uint param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  undefined4 uVar4;
  
  lVar2 = DAT_180419160;
  lVar1 = *(longlong *)(DAT_180419160 + 0x24f8);
  if (*(char *)(lVar1 + 0x239) == '\0') {
    FUN_18016663a(lVar1);
  }
  if (*(char *)(lVar1 + 0x23a) == '\x01') {
    FUN_180168d68(lVar1);
  }
  *(uint *)(lVar1 + 0x94) = param_1 & 0xffff | *(int *)(lVar1 + 0x94) << 0x10;
  *(undefined4 *)(lVar1 + 0x88) = *(undefined4 *)(lVar2 + 0xe18);
  *(float *)(lVar1 + 0x84) = param_2;
  FUN_18016a73c(lVar1);
  fVar3 = *(float *)(lVar1 + 0x88) + *(float *)(lVar1 + 0x88) + *(float *)(lVar1 + 0x80);
  *(float *)(lVar1 + 0x80) = fVar3;
  uVar4 = FUN_180102463(fVar3,param_2 + *(float *)(lVar1 + 0x7c));
  *(undefined4 *)(lVar1 + 0x80) = uVar4;
  *(undefined1 *)(*(longlong *)(lVar1 + 0x188) + 0x10e) = 1;
  return;
}

