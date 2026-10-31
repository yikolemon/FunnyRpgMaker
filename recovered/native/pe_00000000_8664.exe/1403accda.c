/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403accda */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403accda(longlong param_1,longlong param_2,undefined4 param_3,uint param_4,float param_5)

{
  byte bVar1;
  byte *pbVar2;
  longlong unaff_RBP;
  undefined4 *unaff_RDI;
  float fVar3;
  float fVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  if (param_4 < 4) {
    pbVar2 = (byte *)((longlong)&switchD_1403acd27::caseD_0 +
                     (longlong)(int)(&switchD_1403acd27::caseD_0)[param_4]);
    bVar1 = (byte)pbVar2;
    switch(param_4) {
    default:
      *pbVar2 = *pbVar2 + bVar1;
      *pbVar2 = *pbVar2 + bVar1;
      *pbVar2 = *pbVar2 + bVar1;
      *pbVar2 = *pbVar2 + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 2:
    case 3:
      *pbVar2 = *pbVar2 + bVar1;
      *pbVar2 = *pbVar2 + bVar1;
      *pbVar2 = *pbVar2 + bVar1;
      *pbVar2 = *pbVar2 ^ bVar1;
      *pbVar2 = *pbVar2 + bVar1;
      *pbVar2 = *pbVar2 + bVar1;
      *(char *)(param_2 + 0x40) = *(char *)(param_2 + 0x40) + bVar1;
      *pbVar2 = *pbVar2 + bVar1;
      *pbVar2 = *pbVar2 + bVar1;
      *pbVar2 = *pbVar2 + bVar1;
      *pbVar2 = *pbVar2 + bVar1;
      *pbVar2 = *pbVar2 + bVar1;
      *(char *)(unaff_RBP + 0x40) = *(char *)(unaff_RBP + 0x40) + (char)param_2;
      *pbVar2 = *pbVar2 + bVar1;
      *pbVar2 = *pbVar2 + bVar1;
      *pbVar2 = *pbVar2 + bVar1;
      *pbVar2 = *pbVar2 + bVar1;
      *unaff_RDI = (int)pbVar2;
      *pbVar2 = *pbVar2 + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  fVar3 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x20) * DAT_1404ecffc;
  fVar4 = fVar3 + (float)param_2;
  fVar3 = param_5 * fVar3 + (float)((ulonglong)param_2 >> 0x20);
  local_10 = CONCAT44(fVar3 + 0.0,fVar4 + 0.0);
  local_18 = CONCAT44(fVar3 + 0.0,fVar4 + 0.0);
  local_20 = CONCAT44(fVar3 + 0.0,fVar4 + 0.0);
  local_28 = param_3;
  FUN_1403a4864(fVar4 + 0.0,&local_20,&local_18);
  if (ram0x000140613b10 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_8 ^ (ulonglong)auStack_48);
}

