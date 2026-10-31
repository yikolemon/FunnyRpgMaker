/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d3d2b */

void FUN_1400d3d2b(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)FUN_1400d30d4();
  puVar2 = (undefined8 *)FUN_140077ab4(0x48);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  *(undefined8 **)(param_1 + 0x48) = puVar2;
  lVar3 = *(longlong *)(param_1 + 0x68);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x60);
  }
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 6) = 1;
  *(undefined4 *)(puVar2 + 4) = 1;
  *(int *)(puVar2 + 1) = (int)(longlong)*(float *)(param_1 + 0x10);
  *(int *)((longlong)puVar2 + 0xc) = (int)(longlong)*(float *)(param_1 + 0x14);
  *(undefined4 *)(puVar2 + 2) = 0;
  puVar2[5] = lVar3;
  *(undefined8 *)((longlong)puVar2 + 0x34) = 0x5000000000;
  *(undefined4 *)((longlong)puVar2 + 0x44) = 0x80000000;
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)*puVar1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x0001400d3dde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)((longlong *)*puVar1,puVar2 + 1,puVar2,UNRECOVERED_JUMPTABLE);
  return;
}

