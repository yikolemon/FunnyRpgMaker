/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014f30c */

void FUN_18014f30c(undefined4 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = DAT_180419160;
  *(undefined4 *)(DAT_180419160 + 0x25b0) = param_1;
  *(undefined1 *)(lVar2 + 0x25b5) = 1;
  *(bool *)(lVar2 + 0x25b6) = param_2 == -1;
  *(bool *)(lVar2 + 0x25b7) = param_2 == -1;
  *(undefined2 *)(lVar2 + 0x25bc) = *(undefined2 *)(lVar2 + 0x13c);
  uVar1 = *(undefined8 *)(*(longlong *)(lVar2 + 0x1608) + 0x168);
  fVar3 = (float)*(undefined8 *)(lVar2 + 0x118) - (float)uVar1;
  fVar4 = (float)((ulonglong)*(undefined8 *)(lVar2 + 0x118) >> 0x20) -
          (float)((ulonglong)uVar1 >> 0x20);
  *(float *)(lVar2 + 0x25c0) = fVar3;
  *(float *)(lVar2 + 0x25c4) = fVar4;
  *(float *)(lVar2 + 0x25c8) = fVar3;
  *(float *)(lVar2 + 0x25cc) = fVar4;
  *(undefined8 *)(lVar2 + 0x25d0) = 0;
  return;
}

