import { createAsyncThunk } from '@reduxjs/toolkit';
import ApiManager from '../api/apiManager';
import { LoginDTO, RegisterDTO } from '../../Data/DTOs/Auth.DTO';

export const LoginUser = createAsyncThunk(
    'Auth/Login',
    async (LoginDTO: LoginDTO, { rejectWithValue }) => {
        try {
            const response = await ApiManager.apiRequest({
                Url: `Users/login`,
                Method: 'POST',
                Data: LoginDTO,
            });
            return response;
        } catch (error: any) {
            return rejectWithValue(error.message);
        }
    }
);

export const RegisterUser = createAsyncThunk(
    'Auth/Register',
    async (RegisterDTO: RegisterDTO, { rejectWithValue }) => {
        try {
            const response = await ApiManager.apiRequest({
                Url: `Users/register`,
                Method: 'POST',
                Data: RegisterDTO,
            });
            return response;
        } catch (error: any) {
            return rejectWithValue(error.message);
        }
    }
);