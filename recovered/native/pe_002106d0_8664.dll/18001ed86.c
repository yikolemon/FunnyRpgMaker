/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001ed86 */

void FUN_18001ed86(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 local_b0 [32];
  undefined1 local_90 [16];
  longlong local_80;
  undefined8 *local_70;
  byte local_61;
  undefined8 local_60 [4];
  
  local_60[0] = 0xfffffffffffffffe;
  lVar2 = *(longlong *)(param_1 + 8);
  FUN_18001ef72(*(undefined8 *)(param_1 + 0x18),local_90,param_2,param_3);
  if (local_80 != 0) {
    for (uVar5 = 0; uVar5 < 0x100; uVar5 = uVar5 + 1) {
      local_61 = (byte)uVar5;
      FUN_18001ef72(*(undefined8 *)(param_1 + 0x18),local_b0,&local_61,local_60);
      cVar3 = FUN_18001ba14(local_b0,local_90);
      FUN_180001ef2(local_b0);
      if (cVar3 != '\0') {
        puVar4 = *(undefined8 **)(lVar2 + 0x28);
        if (puVar4 == (undefined8 *)0x0) {
          puVar4 = (undefined8 *)FUN_180239630(0x20);
          puVar4[2] = 0;
          puVar4[3] = 0;
          *puVar4 = 0;
          puVar4[1] = 0;
          *(undefined8 **)(lVar2 + 0x28) = puVar4;
          local_70 = puVar4;
        }
        pbVar1 = (byte *)((longlong)puVar4 + (ulonglong)(uVar5 >> 3));
        *pbVar1 = *pbVar1 | (byte)(1 << ((byte)uVar5 & 7));
      }
    }
    FUN_180001ef2(local_90);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180239ab0(0);
}

