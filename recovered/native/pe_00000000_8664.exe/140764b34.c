/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140764b34 */

void FUN_140764b34(ulonglong param_1,float *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  float *pfVar4;
  undefined2 in_FPUControlWord;
  float fVar5;
  
  puVar2 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe8 - 0x70);
  uVar3 = param_1 & 0xffffffff;
  pfVar4 = (float *)(ulonglong)*(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  if ((((*(char *)(param_1 + 0xfc) == '\x01') && (*(char *)(uVar3 + 0x118) < '\x01')) &&
      (*(char *)(uVar3 + 0x119) < '\x01')) ||
     (((*(char *)(uVar3 + 0x101) == '\x01' && (*(char *)(uVar3 + 0x11c) == '\0')) &&
      ('\0' < *(char *)(uVar3 + 0x11b))))) {
    *(undefined8 *)param_2 = *(undefined8 *)(uVar3 + 0x68);
    *(undefined8 *)pfVar4 = *(undefined8 *)(uVar3 + 0x70);
  }
  else {
    fVar5 = *(float *)(uVar3 + 0x78);
    if ((fVar5 == 0.0) && (!NAN(fVar5))) {
      puVar2[0xc] = *(float *)(uVar3 + 0x15c) - *(float *)(uVar3 + 0x154);
      *(undefined2 *)((longlong)puVar2 + 0xe) = in_FPUControlWord;
      *(ushort *)((longlong)puVar2 + 0x16) = *(ushort *)((longlong)puVar2 + 0xe) | 0xc00;
      *(longlong *)(puVar2 + 0xc) = (longlong)ROUND((float)puVar2[0xc]);
      in_FPUControlWord = *(undefined2 *)((longlong)puVar2 + 0xe);
      *(undefined8 *)(puVar2 + 0x1a) = *(undefined8 *)(puVar2 + 0xc);
      puVar2[0x13] = (float)*(longlong *)(puVar2 + 0x1a);
      fVar5 = (float)puVar2[0x13];
    }
    *param_2 = fVar5;
    fVar5 = *(float *)(uVar3 + 0x7c);
    if ((fVar5 == 0.0) && (!NAN(fVar5))) {
      puVar2[10] = *(float *)(uVar3 + 0x160) - *(float *)(uVar3 + 0x158);
      *(undefined2 *)(puVar2 + 3) = in_FPUControlWord;
      *(ushort *)(puVar2 + 5) = *(ushort *)(puVar2 + 3) | 0xc00;
      *(longlong *)(puVar2 + 10) = (longlong)ROUND((float)puVar2[10]);
      *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(puVar2 + 10);
      puVar2[0x12] = (float)*(longlong *)(puVar2 + 0x18);
      fVar5 = (float)puVar2[0x12];
    }
    param_2[1] = fVar5;
    fVar5 = *(float *)(uVar3 + 0x78);
    if ((fVar5 == 0.0) && (!NAN(fVar5))) {
      uVar1 = *(undefined4 *)(uVar3 + 0x15c);
      puVar2[1] = *(undefined4 *)(uVar3 + 0x164);
      *puVar2 = uVar1;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar2 + -2) = &UNK_140764c70;
      FUN_140755a9a();
    }
    *pfVar4 = fVar5;
    fVar5 = *(float *)(uVar3 + 0x7c);
    if ((fVar5 == 0.0) && (!NAN(fVar5))) {
      uVar1 = *(undefined4 *)(uVar3 + 0x160);
      puVar2[1] = *(undefined4 *)(uVar3 + 0x168);
      *puVar2 = uVar1;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar2 + -2) = &UNK_140764cf7;
      FUN_140755a9a();
    }
    pfVar4[1] = fVar5;
  }
  return;
}

