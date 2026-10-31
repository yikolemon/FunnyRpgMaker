/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f8b90 */

void __thiscall FUN_100f8b90(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  
  *(float *)(param_1 + 0x544) = *(float *)(param_1 + 0x544) * param_2;
  *(float *)(param_1 + 0x14) = (float)(int)(*(float *)(param_1 + 0x14) * param_2);
  *(float *)(param_1 + 0x18) = (float)(int)(*(float *)(param_1 + 0x18) * param_2);
  *(float *)(param_1 + 0x1c) = (float)(int)(*(float *)(param_1 + 0x1c) * param_2);
  *(float *)(param_1 + 0x20) = (float)(int)(*(float *)(param_1 + 0x20) * param_2);
  *(float *)(param_1 + 0x2c) = (float)(int)(param_2 * *(float *)(param_1 + 0x2c));
  *(ulonglong *)(param_1 + 0x24) =
       CONCAT44((float)(int)((float)((ulonglong)*(undefined8 *)(param_1 + 0x24) >> 0x20) * param_2),
                (float)(int)((float)*(undefined8 *)(param_1 + 0x24) * param_2));
  *(float *)(param_1 + 0x3c) = (float)(int)(*(float *)(param_1 + 0x3c) * param_2);
  *(float *)(param_1 + 0x40) = (float)(int)(*(float *)(param_1 + 0x40) * param_2);
  *(float *)(param_1 + 0x44) = (float)(int)(*(float *)(param_1 + 0x44) * param_2);
  *(float *)(param_1 + 0x48) = (float)(int)(*(float *)(param_1 + 0x48) * param_2);
  *(float *)(param_1 + 0x4c) = (float)(int)(*(float *)(param_1 + 0x4c) * param_2);
  *(float *)(param_1 + 0x50) = (float)(int)(*(float *)(param_1 + 0x50) * param_2);
  *(float *)(param_1 + 0x54) = (float)(int)(*(float *)(param_1 + 0x54) * param_2);
  *(float *)(param_1 + 0x58) = (float)(int)(*(float *)(param_1 + 0x58) * param_2);
  *(float *)(param_1 + 0x5c) = (float)(int)(*(float *)(param_1 + 0x5c) * param_2);
  *(float *)(param_1 + 0x60) = (float)(int)(*(float *)(param_1 + 0x60) * param_2);
  *(float *)(param_1 + 100) = (float)(int)(*(float *)(param_1 + 100) * param_2);
  *(float *)(param_1 + 0x68) = (float)(int)(*(float *)(param_1 + 0x68) * param_2);
  *(float *)(param_1 + 0x6c) = (float)(int)(*(float *)(param_1 + 0x6c) * param_2);
  *(float *)(param_1 + 0x70) = (float)(int)(*(float *)(param_1 + 0x70) * param_2);
  *(float *)(param_1 + 0x74) = (float)(int)(*(float *)(param_1 + 0x74) * param_2);
  *(float *)(param_1 + 0x78) = (float)(int)(*(float *)(param_1 + 0x78) * param_2);
  *(float *)(param_1 + 0x7c) = (float)(int)(*(float *)(param_1 + 0x7c) * param_2);
  *(float *)(param_1 + 0x80) = (float)(int)(*(float *)(param_1 + 0x80) * param_2);
  *(float *)(param_1 + 0x84) = (float)(int)(*(float *)(param_1 + 0x84) * param_2);
  *(float *)(param_1 + 0x88) = (float)(int)(*(float *)(param_1 + 0x88) * param_2);
  *(float *)(param_1 + 0x8c) = (float)(int)(*(float *)(param_1 + 0x8c) * param_2);
  *(float *)(param_1 + 0x90) = (float)(int)(*(float *)(param_1 + 0x90) * param_2);
  *(float *)(param_1 + 0x94) = (float)(int)(*(float *)(param_1 + 0x94) * param_2);
  *(float *)(param_1 + 0x98) = (float)(int)(*(float *)(param_1 + 0x98) * param_2);
  *(float *)(param_1 + 0x9c) = (float)(int)(*(float *)(param_1 + 0x9c) * param_2);
  *(float *)(param_1 + 0xa0) = (float)(int)(*(float *)(param_1 + 0xa0) * param_2);
  *(float *)(param_1 + 0xa4) = (float)(int)(*(float *)(param_1 + 0xa4) * param_2);
  *(float *)(param_1 + 0xa8) = (float)(int)(*(float *)(param_1 + 0xa8) * param_2);
  *(ulonglong *)(param_1 + 0xac) =
       CONCAT44((float)(int)((float)((ulonglong)*(undefined8 *)(param_1 + 0xac) >> 0x20) * param_2),
                (float)(int)((float)*(undefined8 *)(param_1 + 0xac) * param_2));
  fVar1 = (float)*(undefined8 *)(param_1 + 0xb4);
  fVar2 = (float)((ulonglong)*(undefined8 *)(param_1 + 0xb4) >> 0x20);
  uVar3 = -(uint)(0.0 < fVar1 && (float)DAT_102b8950 != fVar1);
  uVar4 = -(uint)(0.0 < fVar2 && DAT_102b8950._4_4_ != fVar2);
  *(ulonglong *)(param_1 + 0xb4) =
       CONCAT44(~uVar4 & (uint)fVar2,~uVar3 & (uint)fVar1) |
       CONCAT44((uint)(float)(int)(param_2 * fVar2) & uVar4,
                (uint)(float)(int)(param_2 * fVar1) & uVar3);
  *(ulonglong *)(param_1 + 0xbc) =
       CONCAT44((float)(int)((float)((ulonglong)*(undefined8 *)(param_1 + 0xbc) >> 0x20) * param_2),
                (float)(int)((float)*(undefined8 *)(param_1 + 0xbc) * param_2));
  *(float *)(param_1 + 0xd4) = (float)(int)(*(float *)(param_1 + 0xd4) * param_2);
  *(float *)(param_1 + 0xd8) = (float)(int)(*(float *)(param_1 + 0xd8) * param_2);
  *(float *)(param_1 + 0xdc) = (float)(int)(*(float *)(param_1 + 0xdc) * param_2);
  *(float *)(param_1 + 0xe0) = (float)(int)(*(float *)(param_1 + 0xe0) * param_2);
  *(ulonglong *)(param_1 + 0xe4) =
       CONCAT44((float)(int)((float)((ulonglong)*(undefined8 *)(param_1 + 0xe4) >> 0x20) * param_2),
                (float)(int)((float)*(undefined8 *)(param_1 + 0xe4) * param_2));
  *(ulonglong *)(param_1 + 0x100) =
       CONCAT44((float)(int)((float)((ulonglong)*(undefined8 *)(param_1 + 0x100) >> 0x20) * param_2)
                ,(float)(int)((float)*(undefined8 *)(param_1 + 0x100) * param_2));
  *(float *)(param_1 + 0x110) = (float)(int)(*(float *)(param_1 + 0x110) * param_2);
  *(float *)(param_1 + 0x114) = (float)(int)(*(float *)(param_1 + 0x114) * param_2);
  *(float *)(param_1 + 0x118) = (float)(int)(*(float *)(param_1 + 0x118) * param_2);
  *(float *)(param_1 + 0x11c) = (float)(int)(*(float *)(param_1 + 0x11c) * param_2);
  *(ulonglong *)(param_1 + 0x120) =
       CONCAT44((float)(int)((float)((ulonglong)*(undefined8 *)(param_1 + 0x120) >> 0x20) * param_2)
                ,(float)(int)((float)*(undefined8 *)(param_1 + 0x120) * param_2));
  *(ulonglong *)(param_1 + 300) =
       CONCAT44((float)(int)((float)((ulonglong)*(undefined8 *)(param_1 + 300) >> 0x20) * param_2),
                (float)(int)((float)*(undefined8 *)(param_1 + 300) * param_2));
  return;
}

