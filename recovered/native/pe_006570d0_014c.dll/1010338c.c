/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010338c */

int __fastcall FUN_1010338c(int param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_18;
  
  iVar3 = DAT_1039d74c;
  iVar4 = *(int *)(param_1 + 0x90 + param_2 * 4);
  if (iVar4 == 0) {
    iVar4 = FUN_100fa1fa(0xb0);
    FUN_10186fd8(iVar3 + 0x123c);
    *(undefined4 *)(iVar4 + 0xac) = param_3;
    *(int *)(param_1 + 0x90 + param_2 * 4) = iVar4;
  }
  fVar1 = *(float *)(param_1 + 0x88 + param_2 * 4);
  if ((fVar1 != (float)*(double *)(iVar3 + 0x18)) ||
     (NAN(fVar1) || NAN((float)*(double *)(iVar3 + 0x18)))) {
    FUN_10187672();
    iVar2 = *(int *)(iVar3 + 0x5c);
    FUN_101883ba(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),
                 *(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar2 + 0x2c));
    local_18 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) +
                        (float)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20),
                        (float)*(undefined8 *)(param_1 + 0x10) + (float)*(undefined8 *)(param_1 + 8)
                       );
    FUN_101881b4(param_1 + 8,&local_18,0);
    *(float *)(param_1 + 0x88 + param_2 * 4) = (float)*(double *)(iVar3 + 0x18);
  }
  return iVar4;
}

